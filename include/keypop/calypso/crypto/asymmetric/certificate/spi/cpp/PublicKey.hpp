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

namespace keypop {
namespace calypso {
namespace crypto {
namespace asymmetric {
namespace certificate {
namespace spi {
namespace cpp {

/**
 * RSA Public Key
 *
 * @since 0.1.1
 */
class PublicKey {
public:
    /**
     * Virtual destructor.
     */
    virtual ~PublicKey() = default;
};

} /* namespace cpp */
} /* namespace spi */
} /* namespace certificate */
} /* namespace asymmetric */
} /* namespace crypto */
} /* namespace calypso */
} /* namespace keypop */
