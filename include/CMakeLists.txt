# *************************************************************************************************
# Copyright (c) 2024 Calypso Networks Association https://calypsonet.org/                         *
#                                                                                                 *
# This program and the accompanying materials are made available under the                        *
# terms of the MIT License which is available at https://opensource.org/licenses/MIT.             *
#                                                                                                 *
# SPDX-License-Identifier: MIT                                                                    *
# *************************************************************************************************/

SET(LIBRARY_NAME keypopcalypsocryptoasymmetric)

# Declare this library as header only.
ADD_LIBRARY(
    ${LIBRARY_NAME}
    INTERFACE
)

TARGET_INCLUDE_DIRECTORIES(
    ${LIBRARY_NAME}
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/keypop/calyso/crypto/asymmetric
)

ADD_LIBRARY(Keypop::Calypso::Crypto::Asymmetric ALIAS ${LIBRARY_NAME})
