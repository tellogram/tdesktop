/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/

#include <QtCore/QFile>
#include <QtCore/QFileInfo>
#include <QtCore/QDir>
#include <QtCore/QTextStream>
#include <QtCore/QDateTime>
#include <QtCore/QString>
#include <QtCore/QByteArray>
#include <QtCore/QReadWriteLock>
#include <QtCore/QRegularExpression>

#include <crl/crl.h>
#include <rpl/rpl.h>

#include <vector>
#include <map>
#include <deque>
#include <atomic>

#include <range/v3/all.hpp>
#ifdef Q_OS_WIN
#include "platform/win/windows_range_v3_helpers.h"
#endif // Q_OS_WIN

#include "base/flat_map.h"
#include "base/flat_set.h"

#include "scheme.h"
#include "logs.h"