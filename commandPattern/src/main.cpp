#include "LightOffCmd.hpp"
#include "LightOnCmd.hpp"
#include "RemoteControl.hpp"

int main() {
  // Receiver
  auto pLight = std::make_shared<Light>();
  auto pLightOn = std::make_shared<LightOnCmd>(pLight);
  auto pLightOff = std::make_shared<LightOffCmd>(pLight);
  // Invoker
  RemoteControl remote;
  remote.setCommand(pLightOn);
  remote.pressButton();
  remote.pressUndo();
  remote.setCommand(pLightOff);
  remote.pressButton();
  remote.pressUndo();

  return 0;
}