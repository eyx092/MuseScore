/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore BVBA and others
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef MU_WORKSPACE_IWORKSPACECONFIGURATION_H
#define MU_WORKSPACE_IWORKSPACECONFIGURATION_H

#include <vector>

#include "io/path.h"
#include "modularity/imoduleexport.h"
#include "retval.h"

namespace mu::workspace {
class IWorkspaceConfiguration : MODULE_EXPORT_INTERFACE
{
    INTERFACE_ID(IWorkspaceConfiguration)

public:
    virtual ~IWorkspaceConfiguration() = default;

    virtual io::paths workspacePaths() const = 0;

    virtual io::path userWorkspacesDirPath() const = 0;
    virtual io::path userWorkspacePath(const std::string& workspaceName) const = 0;

    virtual ValCh<std::string> currentWorkspaceName() const = 0;
    virtual void setCurrentWorkspaceName(const std::string& workspaceName) = 0;
};
}

#endif // MU_WORKSPACE_IWORKSPACECONFIGURATION_H
