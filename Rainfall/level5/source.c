void n() {
    char buffer[0x208];
    fgets(buffer, 0x200, stdin);
    printf(buffer);   // 🚨 VULNERABILITY
    exit(1);
}