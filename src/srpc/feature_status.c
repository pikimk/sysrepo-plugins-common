/**
 * Copyright (c) 2022 Deutsche Telekom AG.
 *
 * This source code is licensed under BSD 3-Clause License (the "License").
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://opensource.org/licenses/BSD-3-Clause
 */

#include "feature_status.h"
#include <uthash.h>

/**
 * Single feature status hash element.
 */
struct srpc_feature_status_s
{
    const char *id;    ///< Key - feature name.
    uint8_t enabled;   ///< Value of the feature - enabled or disabled.
    UT_hash_handle hh; ///< UTHash reserved data.
};

/**
 * Create a brand new feature status hash.
 *
 * @return New feature status hash data structure.
 */
srpc_feature_status_t *srpc_feature_status_hash_init()
{
    // must first be initialized to NULL
    return NULL;
}

/**
 * Load feature status values for each feature found in the provided session and needed module.
 *
 * @param fs_hash Initialized feature status hash data structure.
 * @param session Sysrepo session.
 * @param module Module to use for feature extraction.
 *
 * @return Error code - 0 on success.
 */
int srpc_feature_status_hash_load(srpc_feature_status_t *fs_hash, sr_session_ctx_t *session, const char *module)
{
    int error = 0;

    return error;
}

/**
 * Get feature value - enabled or disabled.
 *
 * @param fs_hash Feature status hash.
 * @param feature Feature to check.
 *
 * @return Wether the feature is enabled (1) or disabled/not found (0).
 */
uint8_t srpc_feature_status_hash_check(srpc_feature_status_t *fs_hash, const char *feature)
{
    srpc_feature_status_t *fs = NULL;

    HASH_FIND_STR(fs_hash, feature, fs);

    if (fs)
    {
        return fs->enabled;
    }

    return 0;
}

/**
 * Free all hash data.
 *
 * @param fs Feature status hash data structure.
 *
 */
void srpc_feature_status_hash_free(srpc_feature_status_t *fs)
{
}