#pragma once

#include <cstdint>
#include <vector>


namespace maniscalco
{

    std::vector<std::uint8_t> m03_encode
    (
        std::uint8_t const *,
        std::uint8_t const *,
        std::size_t
    );

    void m03_decode
    (
        std::uint8_t const *,
        std::uint8_t const *,
        std::uint8_t *,
        std::uint8_t *
    );

} // namespace maniscalco

