void doEncoderRight() {
  /* If pinA and pinB are both high or both low, it is spinning
     forward. If they're different, it's going backward.

     For more information on speeding up this process, see
     [Reference/PortManipulation], specifically the PIND register.
  */
  if (digitalRead(encoderRightPinA) == digitalRead(encoderRightPinB)) {
    encoderRightPos++;

  } else {
    encoderRightPos--;
  }
}
