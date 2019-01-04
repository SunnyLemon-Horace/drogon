/**
 *
 *  create_filter.h
 *  An Tao
 *
 *  Copyright 2018, An Tao.  All rights reserved.
 *  https://github.com/an-tao/drogon
 *  Use of this source code is governed by a MIT license
 *  that can be found in the License file.
 *
 *  Drogon
 *
 */

#pragma once

#include <drogon/DrObject.h>
#include "CommandHandler.h"
using namespace drogon;
namespace drogon_ctl
{
class create_filter : public DrObject<create_filter>, public CommandHandler
{
  public:
    virtual void handleCommand(std::vector<std::string> &parameters) override;
    virtual std::string script() override { return "create filter class files"; }

  protected:
    std::string _outputPath = ".";
    void createViewFiles(std::vector<std::string> &cspFileNames);
    int createViewFile(const std::string &script_filename);
};
} // namespace drogon_ctl