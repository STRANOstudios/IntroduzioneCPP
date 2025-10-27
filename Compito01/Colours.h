#pragma once

namespace Colour
{
    // ─── Reset ─────────────────────────────────────────────
    constexpr const char* Reset = "\x1b[0m";

    // ─── Regular Colors ────────────────────────────────────
    constexpr const char* Black = "\x1b[30m";
    constexpr const char* Red = "\x1b[31m";
    constexpr const char* Green = "\x1b[32m";
    constexpr const char* Yellow = "\x1b[33m";
    constexpr const char* Blue = "\x1b[34m";
    constexpr const char* Magenta = "\x1b[35m";
    constexpr const char* Cyan = "\x1b[36m";
    constexpr const char* White = "\x1b[37m";

    // ─── Bright Colors ─────────────────────────────────────
    constexpr const char* BrightBlack = "\x1b[90m";
    constexpr const char* BrightRed = "\x1b[91m";
    constexpr const char* BrightGreen = "\x1b[92m";
    constexpr const char* BrightYellow = "\x1b[93m";
    constexpr const char* BrightBlue = "\x1b[94m";
    constexpr const char* BrightMagenta = "\x1b[95m";
    constexpr const char* BrightCyan = "\x1b[96m";
    constexpr const char* BrightWhite = "\x1b[97m";

    // ─── Background Colors ─────────────────────────────────
    constexpr const char* BgBlack = "\x1b[40m";
    constexpr const char* BgRed = "\x1b[41m";
    constexpr const char* BgGreen = "\x1b[42m";
    constexpr const char* BgYellow = "\x1b[43m";
    constexpr const char* BgBlue = "\x1b[44m";
    constexpr const char* BgMagenta = "\x1b[45m";
    constexpr const char* BgCyan = "\x1b[46m";
    constexpr const char* BgWhite = "\x1b[47m";

    // ─── Bright Background Colors ──────────────────────────
    constexpr const char* BgBrightBlack = "\x1b[100m";
    constexpr const char* BgBrightRed = "\x1b[101m";
    constexpr const char* BgBrightGreen = "\x1b[102m";
    constexpr const char* BgBrightYellow = "\x1b[103m";
    constexpr const char* BgBrightBlue = "\x1b[104m";
    constexpr const char* BgBrightMagenta = "\x1b[105m";
    constexpr const char* BgBrightCyan = "\x1b[106m";
    constexpr const char* BgBrightWhite = "\x1b[107m";

    // ─── Text Styles ───────────────────────────────────────
    constexpr const char* Bold = "\x1b[1m";
    constexpr const char* Dim = "\x1b[2m";
    constexpr const char* Italic = "\x1b[3m";
    constexpr const char* Underline = "\x1b[4m";

    // ─── RGB (True Color 24-bit) ───────────────────────────
    namespace detail {
        // simple clamp to hold values ​​in the range 0..255
        constexpr int clamp255(int v) { return (v < 0) ? 0 : (v > 255 ? 255 : v); }
    }

    struct FgRGB { int r, g, b; }; // foreground
    struct BgRGB { int r, g, b; }; // background

    // Factory helpers : you create the object and "insert" it into the stream
    inline FgRGB Fg(int r, int g, int b) { return { r, g, b }; }
    inline BgRGB Bg(int r, int g, int b) { return { r, g, b }; }

    // Streamers: allow `std::cout << Colour::Fg(255,100,0)`
    inline std::ostream& operator<<(std::ostream& os, const FgRGB& c) {
        return os << "\x1b[38;2;"
            << detail::clamp255(c.r) << ';'
            << detail::clamp255(c.g) << ';'
            << detail::clamp255(c.b) << 'm';
    }

    inline std::ostream& operator<<(std::ostream& os, const BgRGB& c) {
        return os << "\x1b[48;2;"
            << detail::clamp255(c.r) << ';'
            << detail::clamp255(c.g) << ';'
            << detail::clamp255(c.b) << 'm';
    }
}
