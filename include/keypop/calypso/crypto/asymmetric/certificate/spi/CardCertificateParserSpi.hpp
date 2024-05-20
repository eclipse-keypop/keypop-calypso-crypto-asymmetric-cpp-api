/**************************************************************************************************
 * Copyright (c) 2024 Calypso Networks Association https://calypsonet.org/                        *
 *                                                                                                *
 * This program and the accompanying materials are made available under the                       *
 * terms of the MIT License which is available at https://opensource.org/licenses/MIT.            *
 *                                                                                                *
 * SPDX-License-Identifier: MIT                                                                   *
 **************************************************************************************************/

#pragma once

#include <cstdint>
#include <memory>
#include <vector>

#include "keypop/calypso/crypto/asymmetric/certificate/spi/CardCertificateSpi.hpp"

namespace keypop {
namespace calypso {
namespace crypto {
namespace asymmetric {
namespace certificate {
namespace spi {

/**
 * SPI dedicated to the creation of card certificates from raw data stored on a card.
 *
 * @since 0.2.0
 */
class CardCertificateParserSpi {
public:
    /**
     * Returns the certificate type.
     *
     * @return A byte.
     * @since 0.2.0
     */
    virtual uint8_t getCertificateType() const = 0;

    /**
     * Parses the given card output data and creates a new card certificate instance.
     *
     * <p>The first byte of the provided byte array is the certificate type.
     *
     * @param cardOutputData A byte array containing the card certificate as stored on the card (316
     *     bytes).
     * @return A non-null reference.
     * @throws CertificateValidationException If the provided certificate has an unsupported format.
     * @since 0.2.0
     */
    virtual std::shared_ptr<CardCertificateSpi>
    parseCertificate(const std::vector<uint8_t>& cardOutputData) const = 0;
};

} /* namespace spi */
} /* namespace certificate */
} /* namespace asymmetric */
} /* namespace crypto */
} /* namespace calypso */
} /* namespace keypop */
