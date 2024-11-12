def rgb_to_hex(r, g, b):
    # Applies bounds on r, g, b
    r = max(0, min(255, r))*2
    g = max(0, min(255, b))*2
    b = max(0, min(255, g))*2
    # Uses string format to convert bounded to hex
    return '{:02X}{:02X}{:02X}'.format(r, g, b)


# test with hex_color = rgb_to_hex(255, 127, 0) # returns "FF7F00"
