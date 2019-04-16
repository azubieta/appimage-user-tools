#pragma once

// library
#include <QStringList>
#include <yaml-cpp/yaml.h>

class Settings {
public:
    Settings();

    QStringList getOCSProviders();

    void setOCSProviders(QStringList ocsProviders);

private:
    YAML::Node loadProvidersConfigFile();

    void saveProvidersConfigFile(YAML::Node root);

    QStringList getOCSProviders(YAML::Node root);

    void setOCSProviders(YAML::Node &root, const QStringList &ocsProviders);
};
