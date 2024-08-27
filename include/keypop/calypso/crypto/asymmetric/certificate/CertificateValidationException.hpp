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
#include <stdexcept>
#include <string>

namespace keypop {
namespace calypso {
namespace crypto {
namespace asymmetric {
namespace certificate {

/**
 * Indicates an issue encountered during the certificate validation.
 *
 * <p>This exception can be triggered by various issues such as an invalid signature or incorrect
 * metadata values within the certificate.
 *
 * @since 0.2.0
 */
class CertificateValidationException : public std::exception {
public:
    /**
     * @param message Message to identify the exception context.
     * @since 0.2.0
     */
    explicit CertificateValidationException(const std::string& message)
    : std::exception() {
        (void)message;
    }

    /**
     * Encapsulates a lower level exception.
     *
     * @param message Message to identify the exception context.
     * @param cause The cause.
     * @since 0.2.0
     */
    CertificateValidationException(
        const std::string& message, const std::shared_ptr<std::exception> cause)
    : std::exception(*cause) {
        (void)message;
    }
};

} /* namespace certificate */
} /* namespace asymmetric */
} /* namespace crypto */
} /* namespace calypso */
} /* namespace keypop */
