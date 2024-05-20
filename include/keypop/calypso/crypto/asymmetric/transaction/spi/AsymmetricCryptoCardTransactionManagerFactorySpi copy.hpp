/**************************************************************************************************
 * Copyright (c) 2024 Calypso Networks Association https://calypsonet.org/                        *
 *                                                                                                *
 * This program and the accompanying materials are made available under the                       *
 * terms of the MIT License which is available at https://opensource.org/licenses/MIT.            *
 *                                                                                                *
 * SPDX-License-Identifier: MIT                                                                   *
 **************************************************************************************************/

#pragma once

#include <memory>

#include "keypop/calypso/crypto/asymmetric/transaction/spi/AsymmetricCryptoCardTransactionManagerSpi.hpp"

namespace keypop {
namespace calypso {
namespace crypto {
namespace asymmetric {
namespace transaction {
namespace spi {

/**
 * Factory of AsymmetricCryptoCardTransactionManagerSpi.
 *
 * @since 0.2.0
 */
class AsymmetricCryptoCardTransactionManagerSpi {
public:
    /**
     * Returns a new instance of AsymmetricCryptoCardTransactionManagerSpi.
     *
     * @return A non-null reference.
     * @since 0.2.0
     */
    virtual std::shared_ptr<AsymmetricCryptoCardTransactionManagerSpi> createCardTransactionManager() const = 0;
};

} /* namespace spi */
} /* namespace transaction */
} /* namespace asymmetric */
} /* namespace crypto */
} /* namespace calypso */
} /* namespace keypop */
