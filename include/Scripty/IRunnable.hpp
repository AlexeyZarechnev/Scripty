#pragma once

namespace Scripty
{

class IRunnable
{
public:
  virtual int run()    = 0;
  virtual ~IRunnable() = default;
};

}  // namespace Scripty