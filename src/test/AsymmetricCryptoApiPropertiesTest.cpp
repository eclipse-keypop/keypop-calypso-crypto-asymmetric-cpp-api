/**************************************************************************************************
 * Copyright (c) 2024 Calypso Networks Association https://calypsonet.org/                        *
 *                                                                                                *
 * This program and the accompanying materials are made available under the                       *
 * terms of the MIT License which is available at https://opensource.org/licenses/MIT.            *
 *                                                                                                *
 * SPDX-License-Identifier: MIT                                                                   *
 **************************************************************************************************/

#include <regex>

#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "keypop/calypso/crypto/asymmetric/AsymmetricCryptoApiProperties.hpp"

using keypop::calypso::crypto::asymmetric::AsymmetricCryptoApiProperties_VERSION;

TEST(AsymmetricCryptoApiPropertiesTest, versionIsCorrectlyWritten) {
    const std::string& apiVersion = AsymmetricCryptoApiProperties_VERSION;
    const std::regex r("\\d+\\.\\d+");

    ASSERT_TRUE(std::regex_match(apiVersion, r));
}
