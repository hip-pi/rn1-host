const char* const MCU_FEEDBACK_COLLISION_NAMES[] =
{
/* 0 */ "Undefined",
/* 1 */ "Acceleration sensor (jerk)",
/* 2 */ "Wheel differential integral compared to gyro integral (wheel slip) : obstacle RIGHT",
/* 3 */ "Wheel differential integral compared to gyro integral (wheel slip) : obstacle LEFT"
};

const char* const MCU_NAVI_STOP_NAMES[] =
{
/* 0*/ "very very close object front RIGHT, unavoidable by turning",
/* 1*/ "very close object front RIGHT, unavoidable by turning",
/* 2*/ "close object front RIGHT, unavoidable by turning",
/* 3*/ "object front RIGHT, unavoidable by turning",
/* 4*/ "object directly in the FRONT (slightly right segment)",
/* 5*/ "very very close object in front of any sonar",
/* 6*/ "object in front of either the middle sonar, or both left and right sonars",
/* 7*/ "decided action requires turning both left and right a significant amount",
/* 8*/ "\"do not turn left\" active, but angular movement is required",
/* 9*/ "\"do not turn right\" active, but angular movement is required",
/*10*/ "res",
/*11*/ "lost from the original track (angle to dest differs too much from the original angle)",
/*12*/ "res",
/*13*/ "res",
/*14*/ "res",
/*15*/ "res",
/*16*/ "very very close object front LEFT, unavoidable by turning",
/*17*/ "very close object front LEFT, unavoidable by turning",
/*18*/ "close object front LEFT, unavoidable by turning",
/*19*/ "object front LEFT, unavoidable by turning",
/*20*/ "object directly in the FRONT (slightly left segment)",
/*21*/ "res",
/*22*/ "res",
/*23*/ "res",
/*24*/ "res",
/*25*/ "res",
/*26*/ "res",
/*27*/ "res",
/*28*/ "res",
/*29*/ "res",
/*30*/ "res",
/*31*/ "res"
};

const char* const MCU_NAVI_ACTION_NAMES[] =
{
/* 0*/ "res",
/* 1*/ "very close object front RIGHT, turn LEFT",
/* 2*/ "close object front RIGHT, turn LEFT",
/* 3*/ "object front RIGHT, turn LEFT",
/* 4*/ "far-away object front RIGHT, turn LEFT early",
/* 5*/ "very far-away object front RIGHT, turn LEFT extra early",
/* 6*/ "very far-away, and probably non-colliding object front RIGHT, turn LEFT very slightly",
/* 7*/ "passing/going to pass object on RIGHT, do NOT turn RIGHT",
/* 8*/ "going to pass object farther away on RIGHT, do NOT turn RIGHT",
/* 9*/ "arse very close to hit if turned, do NOT turn RIGHT mode 2",
/*10*/ "arse close to hit if turned more than slightly, do NOT turn RIGHT mode 2",
/*11*/ "LEFT sonar sees an object, turn RIGHT",
/*12*/ "RIGHT sonar sees an object, turn LEFT",
/*13*/ "Both turn left and turn right active simultaneously, but slightly enough; compromise was calculated",
/*14*/ "res",
/*15*/ "res",
/*16*/ "res",
/*17*/ "very close object front LEFT, turn RIGHT",
/*18*/ "close object front LEFT, turn RIGHT",
/*19*/ "object front LEFT, turn RIGHT",
/*20*/ "far-away object front LEFT, turn RIGHT early",
/*21*/ "very far-away object front LEFT, turn RIGHT extra early",
/*22*/ "very far-away, and probably non-colliding object front LEFT, turn RIGHT very slightly",
/*23*/ "passing/going to pass object on LEFT, do NOT turn LEFT",
/*24*/ "going to pass object farther away on LEFT, do NOT turn LEFT",
/*25*/ "arse very close to hit if turned, do NOT turn LEFT",
/*26*/ "arse close to hit if turned more than slightly, do NOT turn LEFT mode 2",
/*27*/ "res",
/*28*/ "res",
/*29*/ "res",
/*30*/ "res",
/*31*/ "res"
};

