#!/bin/bash

hostdir="/home/hrst/rn1-host"
prog="/home/hrst/rn1-tools/p.sh"

export LD_LIBRARY_PATH=/opt/softkinetic/DepthSenseSDK/lib
export DEPTHSENSESDK_DIR=/opt/softkinetic/DepthSenseSDK
rm -f ${hostdir}/*.map

while true
do
	touch ${hostdir}/rn1host.lock
	${hostdir}/rn1host
	rm -f ${hostdir}/rn1host.lock

	case "$?" in
	10)	echo "Running flasher..."
		sleep 1
		$prog
		;;

	5)	echo "Quitting..."
		break
		;;

	*)	echo "Restarting rn1host..."
		;;
	esac
done
