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

#include "keypop/calypso/crypto/asymmetric/certificate/spi/cpp/PublicKey.hpp"

namespace keypop {
namespace calypso {
namespace crypto {
namespace asymmetric {
namespace certificate {
namespace spi {

using keypop::calypso::crypto::asymmetric::certificate::spi::cpp::PublicKey;

/**
 * SPI providing a generic public key.
 *
 * @since 0.2.0
 */
class CaCertificateContentSpi {
public:
    /**
     * Returns the public key.
     *
     * @return A non-null reference.
     * @see PublicKey
     * @since 0.2.0
     */
    virtual const std::shared_ptr<PublicKey> getPublicKey() const = 0;

    /**
     * Returns the reference of the public key as a byte array.
     *
     * @return A non-empty byte array.
     * @since 0.2.0
     */
    virtual const std::vector<uint8_t>& getPublicKeyReference() const = 0;

    /**
     * Returns the validity start date of the certificate in long format.
     *
     * <p>The date is represented in the format 0xYYYYMMDD, where YYYY is the four-digit year, MM is
     * the two-digit month, and DD is the two-digit day.
     *
     * <p>If the validity start date is not defined or available, the method returns 0.
     *
     * @return 0 if the validity start date is not defined.
     * @since 0.2.0
     */
    virtual long getStartDate() const = 0;

    /**
     * Returns the validity end date of the certificate in long format.
     *
     * <p>The date is represented in the format 0xYYYYMMDD, where YYYY is the four-digit year, MM is
     * the two-digit month, and DD is the two-digit day.
     *
     * <p>If the validity end date is not defined or available, the method returns 0.
     *
     * @return 0 if the validity end date is not defined.
     * @since 0.2.0
     */
    virtual long getEndDate() const = 0;

    /**
     * Indicates if the AID has to be checked.
     *
     * @return true if the AID must be checked.
     * @since 0.2.0
     */
    virtual bool isAidCheckRequested() const = 0;

    /**
     * Indicates if the AID is truncated.
     *
     * @return true if the AID is truncated.
     * @since 0.2.0
     */
    virtual bool isAidTruncated() const = 0;

    /**
     * Return the AID value.
     *
     * @return null if the AID check is not requested.
     * @since 0.2.0
     */
    virtual const std::vector<uint8_t>& getAid() const = 0;

    /**
     * Indicates if the certificate can be used to authenticate CA certificates.
     *
     * @return true if the certificate can be used to authenticate CA certificates.
     * @since 0.2.0
     */
    virtual bool isCaCertificatesAuthenticationAllowed() const = 0;

    /**
     * Indicates if the certificate can be used to authenticate card certificates.
     *
     * @return true if the certificate can be used to authenticate card certificates.
     * @since 0.2.0
     */
    virtual bool isCardCertificatesAuthenticationAllowed() const = 0;
};

} /* namespace spi */
} /* namespace certificate */
} /* namespace asymmetric */
} /* namespace crypto */
} /* namespace calypso */
} /* namespace keypop */
