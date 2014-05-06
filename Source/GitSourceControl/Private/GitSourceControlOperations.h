// Copyright (c) 2014 Sebastien Rombauts (sebastien.rombauts@gmail.com)
//
// Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
// or copy at http://opensource.org/licenses/MIT)

#pragma once

#include "IGitSourceControlWorker.h"

class FGitConnectWorker : public IGitSourceControlWorker
{
public:
	// IGitSourceControlWorker interface
	virtual FName GetName() const OVERRIDE;
	virtual bool Execute(class FGitSourceControlCommand& InCommand) OVERRIDE;
	virtual bool UpdateStates() const OVERRIDE;
};
