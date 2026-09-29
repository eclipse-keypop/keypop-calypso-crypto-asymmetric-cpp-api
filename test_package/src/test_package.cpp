/******************************************************************************
 * Copyright (c) 2025 Calypso Networks Association https://calypsonet.org/    *
 *                                                                            *
 * This program and the accompanying materials are made available under the   *
 * terms of the MIT License which is available at                             *
 * https://opensource.org/licenses/MIT.                                       *
 *                                                                            *
 * SPDX-License-Identifier: MIT                                               *
 ******************************************************************************/

#include <iostream>

#include "keypop/calypso/crypto/asymmetric/AsymmetricCryptoApiProperties.hpp"

int
main() {
    std::cout << "Keypop::Calypso::Crypto::Asymmetric header-only package "
                 "resolved and linked correctly (API version "
              << keypop::calypso::crypto::asymmetric::
                     AsymmetricCryptoApiProperties_VERSION
              << ")" << std::endl;
    return 0;
}
