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
#include <vector>

#include "keypop/calypso/crypto/asymmetric/certificate/spi/CardPublicKeySpi.hpp"

namespace keypop {
namespace calypso {
namespace crypto {
namespace asymmetric {
namespace transaction {
namespace spi {

using keypop::calypso::crypto::asymmetric::certificate::spi::CardPublicKeySpi;

/**
 * Calypso card asymmetric key cryptography service.
 *
 * <p>It defines the API needed by a terminal to perform the cryptographic operations required by a
 * Calypso card when using asymmetric keys.
 *
 * <p>An instance of this interface can be obtained via the method
 * AsymmetricCryptoCardTransactionManagerFactorySpi::createCardTransactionManager().
 *
 * @since 0.2.0
 */
class AsymmetricCryptoCardTransactionManagerSpi {
public:
    /**
     * Initialize the cryptographic context for a new secure session in PKI mode with the provided
     * card public key.
     *
     * @param cardPublicKey The card public key.
     * @throw AsymmetricCryptoException If the provided public key value is not compliant with the
     *        current elliptic curve or if an error occurs during the initialization.
     * @since 0.2.0
     */
    virtual void initTerminalPkiSession(const std::shared_ptr<CardPublicKeySpi> cardPublicKey) = 0;

    /**
     * Updates the session signature verification engine with data sent or received from the card as
     * a byte array.
     *
     * <p>In the case of ingoing data, the input length must be &gt;= 5.
     *
     * <p>In the case of outgoing data, the input length must be &gt;= 2.
     *
     * @param cardApdu The APDU bytes exchanged with the card (ingoing or outgoing).
     * @throw AsymmetricCryptoException If an error occurs while updating the session.
     * @since 0.2.0
     */
    virtual void updateTerminalPkiSession(const std::vector<uint8_t>& cardApdu) = 0;

    /**
     * Verifies the provided secure session signature (a 64-byte byte array) from the previously
     * initialized and updated context.
     *
     * @param cardSessionSignature The card signature.
     * @return True if the signature is valid, false otherwise.
     * @throw AsymmetricCryptoException If an error occurs while verifying the signature.
     * @since 0.2.0
     */
    virtual bool isCardPkiSessionValid(const std::vector<uint8_t>& cardSessionSignature) = 0;
};

} /* namespace spi */
} /* namespace transaction */
} /* namespace asymmetric */
} /* namespace crypto */
} /* namespace calypso */
} /* namespace keypop */
