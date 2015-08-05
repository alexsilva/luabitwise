--
-- Created by IntelliJ IDEA.
-- User: alex
-- Date: 05/08/2015
-- Time: 10:34
-- To change this template use File | Settings | File Templates.
--

local LIBRARY_PATH = getenv("LIBRARY_PATH")
handle, msg = loadlib(LIBRARY_PATH)

if (not handle or handle == -1) then
    error(msg)
end

callfromlib(handle, 'lua_lbitwiseopen')

local a = -9
local b = 1

local data = {
    ['brshift'] = {
        value = brshift(a, b),
        expected = -5,
        simbol = ">>"
    },
    ['blshift'] = {
        value = blshift(a, b),
        expected = -18,
        simbol = "<<"
    },
    ['band'] = {
        value = band(a, b),
        expected = 1,
        simbol = "&"
    },
    ['bxor'] = {
        value = bxor(a, b),
        expected = -10,
        simbol = "^"
    },
    ['bor'] = {
        value = bor(a, b),
        expected = -9,
        simbol = "|"
    },
    ['bnot'] = {
        value = bnot(a),
        expected = 8,
        simbol = "~"
    }
}

foreach(data, function(k, d)
    assert (
        d.value == d.expected,
        format('[%s] %i %s %i == %i expected %i', k, %a, d.simbol, %b, d.value, d.expected)
    )
end)