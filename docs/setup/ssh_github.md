# SSH & GitHub Setup | SSH密钥与GitHub配置

> Connect your local machine to GitHub using SSH key authentication.

---

## 1. Generate SSH Key | 生成SSH密钥

```bash
# Check if key already exists | 检查是否已有密钥
ls -la ~/.ssh

# Generate new key | 生成新密钥
# -t ed25519: key type (modern, secure) | 密钥类型
# -C: label to identify this machine | 标签
ssh-keygen -t ed25519 -C "macbook-m-leetcode"
# Press Enter for all prompts | 一路回车
```

---

## 2. Configure SSH Agent | 配置SSH Agent

**ssh-agent | SSH代理** — holds your key in memory so you don't re-enter it every time.

```bash
# First-time setup only | 仅第一次需要手动运行
eval "$(ssh-agent -s)"
ssh-add --apple-use-keychain ~/.ssh/id_ed25519   # Mac
ssh-add ~/.ssh/id_ed25519                         # Ubuntu
```

**Mac: configure for automatic loading | Mac自动加载配置:**

```bash
cat > ~/.ssh/config << 'SSHEOF'
Host github.com
    AddKeysToAgent yes
    UseKeychain yes
    IdentityFile ~/.ssh/id_ed25519
SSHEOF
```

After this, key loads automatically on every restart | 重启后自动加载.

---

## 3. Add Key to GitHub | 添加密钥到GitHub

```bash
# Copy public key | 复制公钥
pbcopy < ~/.ssh/id_ed25519.pub    # Mac
cat ~/.ssh/id_ed25519.pub         # Ubuntu (manually copy output)
```

On GitHub | 在GitHub上:
```
Settings → SSH and GPG keys → New SSH key
Title: macbook-m-leetcode
Paste → Add SSH key
```

---

## 4. Verify Connection | 验证连接

```bash
ssh -T git@github.com
```

Expected | 预期输出:
```
Hi wens2022! You've successfully authenticated,
but GitHub does not provide shell access.
```

---

## 5. GitHub CLI | GitHub命令行工具

```bash
brew install gh        # Mac
sudo apt install gh    # Ubuntu

gh auth login
# Select: GitHub.com → SSH → Login with a web browser
```

**Create repo from local | 从本地创建远程仓库:**
```bash
gh repo create leetcode --public --source=. --push
```

---

## Key Concepts | 关键概念

| Term | 术语 | Explanation |
|---|---|---|
| Private key | 私钥 | Stays on your machine, never share |
| Public key | 公钥 | Uploaded to GitHub |
| ssh-agent | SSH代理 | Holds key in memory |
| Keychain | 钥匙串 | macOS secure storage |
| remote origin | 远程仓库 | GitHub URL your local repo connects to |
