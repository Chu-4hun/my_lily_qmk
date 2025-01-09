#pragma once

#define MASTER_RIGHT

// #define ENCODER_A_PINS  { F4 } //Master half pin Out A
// #define ENCODER_B_PINS   { F5 } //Master half pin Out B
// #define ENCODER_RESOLUTIONS { 4 } //Master's pulses the encoder registers between each detent
// #define ENCODER_A_PINS_RIGHT  { F4 } //Slave half pin Out A
// #define ENCODER_B_PINS_RIGHT  { D4 } //Slave half pin Out B
// #define ENCODER_RESOLUTIONS_RIGHT { 4 } //Slave's pulses the encoder registers between each detent

// #define ENCODER_RESOLUTION 4

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#ifdef ENCODER_ENABLE 
  #define ENCODERS_PAD_A { F5 }
  #define ENCODERS_PAD_B { F4 }
  #define ENCODER_RESOLUTION 2
  
  // Enable if encoder is on the left side
  // #define ENCODER_DIRECTION_FLIP
#endif 