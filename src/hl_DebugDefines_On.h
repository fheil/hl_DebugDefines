/*
  hl_DebugDefines_On.h - Some defines for serial debugging
  Written by F. Heil, November 1st, 2018.
*/
#ifndef hl_DebugDefines_On_h
#define hl_DebugDefines_On_h

#define _DEBUG_
#ifdef _DEBUG_
  #define debugBegin(I) \
  Serial.begin(I);
  #define debugPrint(S) \
  Serial.print(S);
  #define debugPrintln(S) \
  Serial.println(S);
#else
  #define debugBegin(I)
  #define debugPrint(S)
  #define debugPrintln(S)
#endif

#endif //hl_DebugDefines_On_h


