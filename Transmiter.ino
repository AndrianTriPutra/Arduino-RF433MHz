#include <VirtualWire.h>
char *controller;
void setup(){
vw_set_ptt_inverted(true);
vw_set_tx_pin(12);
vw_setup(4000);
}
void loop(){
controller="1";
vw_send((uint8_t *)controller,strlen(controller));
vw_wait_tx(); 
delay(2000);
///////////////////////////////////////////////////////
controller="0";
vw_send((uint8_t*)controller,strlen(controller));
vw_wait_tx();
delay(2000);
}
