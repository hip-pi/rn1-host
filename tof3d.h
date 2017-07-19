#ifndef TOF3D_H
#define TOF3D_H

#define TOF3D_HMAP_SPOT_SIZE 40
#define TOF3D_HMAP_YSPOTS 36
#define TOF3D_HMAP_YMIDDLE 18
#define TOF3D_HMAP_XSPOTS 30

extern int8_t tof3d_objmap[TOF3D_HMAP_XSPOTS*TOF3D_HMAP_YSPOTS];

extern "C" void* start_tof(void*);

#endif
