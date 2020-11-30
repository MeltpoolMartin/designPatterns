#ifndef LIGHT_OFF_CMD_HPP
#define LIGHT_OFF_CMD_HPP

#include "ICommand.hpp"
#include "Light.hpp"

class LightOffCmd : public ICommand {
 public:
  LightOffCmd(std::shared_ptr<Light> light) : m_pLight(light) {}
  void execute() override { m_pLight->lightOff(); }
  void undo() override { m_pLight->lightOn(); }

 private:
  std::shared_ptr<Light> m_pLight;
};

#endif