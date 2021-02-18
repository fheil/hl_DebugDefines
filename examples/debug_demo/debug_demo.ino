#include <hl_DebugDefines_On.h>
//#include <hl_DebugDefines_Off.h>

int n=1;
char buf[64];

void setup() {
  // put your setup code here, to run once:
  debugBegin(115200);

  debugPrintln("");
  debugPrintln("\ndebug_demo startet...");
  debugPrintln("");

#ifdef _DEBUG_
  debugPrintln("   #####  #   #");
  debugPrintln("   #   #  ##  #");
  debugPrintln("   #   #  # # #");
  debugPrintln("   #   #  #  ##");
  debugPrintln("   #####  #   #");
  debugPrintln("");
  debugPrintln("\"hl_DebugDefines_On.h\" included, so this demo will write every 2s some messages to the serial monitor...");
  debugPrintln("");
#else
  debugPrintln("   ##### #### ####");
  debugPrintln("   #   # #    #");
  debugPrintln("   #   # ###  ###");
  debugPrintln("   #   # #    #");
  debugPrintln("   ##### #    #");
  debugPrintln("");
  debugPrintln("\"hl_DebugDefines_Off.h\" included, the code for debug output will be ignored, the code is not compiled into the sketch...");
  debugPrintln("");
#endif
}

void loop() {
  // put your main code here, to run repeatedly:
  sprintf(buf, "debug message no. %d", n);
  debugPrintln(buf);

  delay (2000);
  n++;
}
