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
#include <vector>

#include "keypop/calypso/crypto/asymmetric/certificate/spi/CaCertificateContentSpi.hpp"

namespace keypop {
namespace calypso {
namespace crypto {
namespace asymmetric {
namespace certificate {
namespace spi {

/**
 * SPI dedicated to Certification Authority (CA) certificate management.
 *
 * @since 0.2.0
 */
class CaCertificateSpi {
public:
    /**
     * Retrieves the reference of the issuer's public key as a byte array.
     *
     * @return A non-empty byte array.
     * @since 0.2.0
     */
    virtual const std::vector<uint8_t>& getIssuerPublicKeyReference() const = 0;

    /**
     * Verifies the certificate signature and other relevant fields, then returns the certificate
     * content.
     *
     * <p>This method performs a comprehensive validation of the certificate, including but not
     * limited to checking the validity of the signature. It also verifies other essential fields of
     * the certificate, such as the validity period, the issuer and subject details, and any relevant
     * constraints or extensions. The method ensures the certificate is not only properly signed by
     * the issuer but also conforms to the expected standards and requirements.
     *
     * @param issuerCertificateContent The issuer certificate content to be used for signature
     *        verification.
     * @return A non-null reference.
     * @throw CertificateValidationException If the certificate is invalid, expired, revoked, or
     *        fails any other validation checks.
     * @throw AsymmetricCryptoException If a technical error occurs during the cryptographic
     *        computations.
     * @since 0.2.0
     */
    virtual const CaCertificateContentSpi& checkCertificateAndGetContent(
        const CaCertificateContentSpi& issuerCertificateContent) = 0;
};

} /* namespace spi */
} /* namespace certificate */
} /* namespace asymmetric */
} /* namespace crypto */
} /* namespace calypso */
} /* namespace keypop */
