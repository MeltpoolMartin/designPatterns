#ifndef LIGHT_ON_CMD_HPP
#define LIGHT_ON_CMD_HPP

#include "ICommand.hpp"
#include "Light.hpp"

class LightOnCmd : public ICommand {
 public:
  LightOnCmd(std::shared_ptr<Light> light) : m_pLight(light) {}
  void execute() override { m_pLight->lightOn(); }
  void undo() override { m_pLight->lightOff(); }

 private:
  std::shared_ptr<Light> m_pLight;
};

#endif