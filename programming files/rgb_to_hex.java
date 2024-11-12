public class rgb_to_hex {
    public static void main(String[] args) {
        //example color in main method, could be any color theoretically
        int r = 255;
        int g = 127;
        int b = 0;
        //call the function to return the str of the HEX version
        String hexColor = rgbToHex(r, g, b);
        //return variables as readable to the user
        System.out.println("RGB color (" + r + ", " + g + ", " + b + ") = " + hexColor);
    }

    public static String rgbToHex(int r, int g, int b) {
        r = Math.min(255, Math.max(0, r));
        g = Math.min(255, Math.max(0, g));
        b = Math.min(255, Math.max(0, b));
        //finds the corresponding HEX value
        return String.format("%02X%02X%02X", r, g, b);
    }
}

//Test with RGB color (255, 127, 0) = FF7F00


