#pragma once

#include <memory>
#include <string>

#include "IRunnable.hpp"

namespace Scripty
{

class Command : public IRunnable
{
public:
  explicit Command(const std::string& name);
  explicit Command(const char* name);

  ~Command();

public:  // IRunnable implementation
  int run() override;

private:  // Pimpl idiom to hide implementation details
  struct Impl;
  std::unique_ptr<Impl> p_impl_;
};

}  // namespace Scripty