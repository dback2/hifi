//
//  MirrorCameras.h
//  interface/src
//
//  Copyright 2017 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

#ifndef hifi_MirrorCameras_h
#define hifi_MirrorCameras_h

#include "MirrorCamera.h"

class MirrorCameras : public QObject {
    Q_OBJECT

public:
    MirrorCameras() {};
    ~MirrorCameras();

    void deleteCameras();

public slots:
    void addCamera(const QUuid& entityID);
    void removeCamera(const QUuid& entityID);

private:
    QReadWriteLock _camerasLock;
    QHash<QUuid, MirrorCamera*> _cameras;
};

#endif // hifi_MirrorCameras_h