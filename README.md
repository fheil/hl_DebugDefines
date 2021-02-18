# hl_DebugDefines
Some nice helper functions to facilitate debugging (replacement for Serial.begin/print/println) your ESP8666 (s. https://www.espressif.com/) code with the Arduino IDE.

The Arduino IDE preprocessor supports conditional compilation like any othe CPP-Compiler. If you don't want all the debug output in your final compiled sketch, working with 'Serial.print' and 'Serial.println' is a little bit clumsy because you have to comment uncomment every time you hae an change to your code and want to debug it. **hl_DebugDefines** is a set off a few helper files, which facilitate the elimination off you debug output, resulting in minor compilations.

These helper functions were written as a replacment of typing all the different 'Serial.*' code. You only have to include one header file in your code. Actually there are 2 header files, one called

'''hl_DebugDefines_On.h'''

and the other called

''' hl_DebugDefines_Off.h'''

Depending on your choice, which off the 2 header files you include (it's only to change max. 2 characters ;-) ), you either get all the debug output to the serial monitor or you even don't have the code for debugging in your compiliation.
