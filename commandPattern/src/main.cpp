#include "LightOffCmd.hpp"
#include "LightOnCmd.hpp"
#include "RemoteControl.hpp"

int main() {
  // Receiver
  Light* pLight = new Light();
  LightOnCmd* pLightOn = new LightOnCmd(pLight);
  LightOffCmd* pLightOff = new LightOffCmd(pLight);
  // Invoker
  RemoteControl* pRemote = new RemoteControl();
  pRemote->setCommand(pLightOn);
  pRemote->pressButton();
  pRemote->pressUndo();
  pRemote->setCommand(pLightOff);
  pRemote->pressButton();
  pRemote->pressUndo();

  delete pLight;
  delete pLightOn;
  delete pLightOff;
  delete pRemote;
  return 0;
}