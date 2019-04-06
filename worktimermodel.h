#ifndef WORKTIMERMODEL_H
#define WORKTIMERMODEL_H

#include <QObject>
#include <QDebug>
#include <QString>

#include "../../PluginsCommon/plugin_base.h"

#include "../../PluginsInterfaces/iworktimermodel.h"


//! addtogroup WorkTimerModel_imp
//! {
class WorkTimerModel : public
        PluginBase,
        IWorkTimerModel
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "TimeKeeper.Module.Test" FILE "PluginMeta.json")
    Q_INTERFACES(
            IPlugin
            IWorkTimerModel
            )

public:
    WorkTimerModel();
    virtual ~WorkTimerModel() override;

private:
    // Write your internal methods here
};
//! }
#endif // WORKTIMERMODEL_H
