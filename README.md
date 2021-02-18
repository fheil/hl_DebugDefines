# hl_DebugDefines
Some nice helper functions to facilitate debugging (replacement for Serial.begin/print/println) your ESP8666 (s. https://www.espressif.com/) code with the Arduino IDE.

The Arduino IDE preprocessor supports conditional compilation like any other CPP-Compiler. If you don't want all the debug output in your final compiled sketch, working with `Serial.print` and `Serial.println` is a little bit clumsy because you have to comment or uncomment every time you have a change to your code and want to debug it. **hl_DebugDefines** is a small set off a helper files, which facilitate the elimination off your debug output, resulting in smaller compiled code.

These helper functions were written as a replacment of all the different `Serial.*` lines. You only have to include one header file in your code. Actually there are 2 header files, one called

```hl_DebugDefines_On.h```

and the other called

``` hl_DebugDefines_Off.h```

Depending on your choice, which off the 2 header files you include (it's only to change max. 2 characters :grin: ), you either get all the debug output to the serial monitor or you even don't have the code for debugging in your compiliation.
