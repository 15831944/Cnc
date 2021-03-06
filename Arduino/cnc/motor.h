class Motor {
public : 
  Motor( int sp, int dp, int ep, int s );
  void Reset( );
  void SetDirection( int d );
  long InitMove( long s, long t );
  long TimeToNextMove( long t );
  long Move( long t );
  long Remain( );
  long Done( );
  long GetPos( );
  long FakeMove( long s );
private :
  long curPos;
  int curDir;
  int toggle;
  int swap;
  
  int stepPin;
  int dirPin;
  int endPin;
  
  long moveLength;
  long moveStep;
  long moveDuration;
  long stepDuration;
  
  long decelTime;
  long decelDist;
};
