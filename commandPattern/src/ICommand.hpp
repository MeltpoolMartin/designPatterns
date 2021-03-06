#ifndef ICOMMAND_HPP
#define ICOMMAND_HPP

class ICommand {
 public:
  virtual void execute() = 0;
  virtual void undo() = 0;
};

#endif