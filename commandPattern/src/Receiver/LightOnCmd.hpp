#ifndef LIGHT_ON_CMD_HPP
#define LIGHT_ON_CMD_HPP

#include "ICommand.hpp"
#include "Light.hpp"

class LightOnCmd : public ICommand {
 public:
  LightOnCmd(Light* light) : m_pLight(light) {}
  void execute() override { m_pLight->lightOn(); }
  void undo() override { m_pLight->lightOff(); }

 private:
  Light* m_pLight;
};

#endif