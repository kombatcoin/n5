/* Copyright (c) 2014, N5coin Developers */
/* See LICENSE for licensing information */

/**
 * \file N5coin.h
 * \brief Headers for N5coin.cpp
 **/

#ifndef TOR_N5coin_H
#define TOR_N5coin_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* N5coin_tor_data_directory(
    );

    char const* N5coin_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

