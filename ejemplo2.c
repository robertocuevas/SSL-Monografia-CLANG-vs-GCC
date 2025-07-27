int main() {
    int x = ({
        int y = 10;
        y + 5;
    });
    return x;
}