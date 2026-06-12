#include "Scripty/Command.hpp"

#include <iostream>
namespace Scripty
{
struct Command::Impl
{
};

Command::Command(const std::string& /*name*/) {}

Command::~Command() = default;

int Command::run()
{
  std::cout << "Running command..." << std::endl;
  return 0;
}
}  // namespace Scripty