#ifndef REMOTE_CONTROL_HPP
#define REMOTE_CONTROL_HPP

#include "ICommand.hpp"

class RemoteControl {
 public:
  void setCommand(std::shared_ptr<ICommand> cmd) { m_pCmd = cmd; }
  void pressButton() { m_pCmd->execute(); }
  void pressUndo() { m_pCmd->undo(); }

 private:
  std::shared_ptr<ICommand> m_pCmd;
};

#endif