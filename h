# -*- mode: snippet -*-
#name : HelloWorld
# --
public class ${1:`(file-name-sans-extension (buffer-name))`} {
    public static void main(String[] args) {
        System.out.println("Hello world!");
    }
}
