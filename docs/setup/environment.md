# Environment Setup | 环境配置

> Development environment setup for LeetCode practice.
> Covers Mac (Apple Silicon) and Ubuntu 22.04 LTS.

---

## Verify Before Installing | 安装前先检查

Always check what's already installed before running any install command.

```bash
brew --version       # Mac only
clang++ --version
cmake --version
ninja --version
python3 --version
uv --version
git --version
code --version
```

---

## Mac (Apple Silicon | M芯片)

### 1. Homebrew | 包管理器

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

echo 'eval "$(/opt/homebrew/bin/brew shellenv)"' >> ~/.zshrc
source ~/.zshrc

brew --version
```

Keep updated | 保持更新:
```bash
brew update && brew outdated
brew upgrade
```

### 2. C++ Toolchain | C++工具链

```bash
xcode-select --install
brew install cmake ninja

clang++ --version   # expect: Apple clang 17+
cmake --version     # expect: 4.x+
ninja --version     # expect: 1.x+
```

### 3. Python | Python工具链

```bash
curl -LsSf https://astral.sh/uv/install.sh | sh

uv --version        # expect: 0.8+
python3 --version   # expect: 3.13+
```

### 4. VSCode

```bash
brew install --cask visual-studio-code
code --version
```

---

## Ubuntu 22.04 LTS

### 1. System Update | 系统更新

```bash
sudo apt update && sudo apt upgrade -y
```

### 2. C++ Toolchain | C++工具链

```bash
sudo apt install -y build-essential cmake ninja-build

g++ --version       # expect: 11+
cmake --version     # expect: 3.x+
ninja --version
```

### 3. Python | Python工具链

```bash
# uv (recommended | 推荐)
curl -LsSf https://astral.sh/uv/install.sh | sh
source ~/.bashrc

uv --version
python3 --version   # expect: 3.10+
```

### 4. VSCode

```bash
sudo snap install code --classic
code --version
```

### 5. Git

```bash
sudo apt install -y git
git --version
```

---

## Git Configuration | Git配置 (both platforms)

```bash
git config user.name
git config user.email

# Set if not configured | 如果未配置
git config --global user.name "your_name"
git config --global user.email "your_email"
```

---

## Verified Configurations | 已验证配置

### Mac
| Tool | Version | Status |
|---|---|---|
| Homebrew | 4.6.0 | ✅ |
| clang++ | 17.0.0 (arm64) | ✅ |
| cmake | 4.2.3 | ✅ |
| ninja | 1.13.2 | ✅ |
| Python | 3.13.5 | ✅ |
| uv | 0.8.8 | ✅ |
| git | 2.50.1 | ✅ |
| VSCode | 1.103.1 (arm64) | ✅ |

### Ubuntu 22.04
| Tool | Version | Status |
|---|---|---|
| g++ | TBD | 🔲 |
| cmake | TBD | 🔲 |
| ninja | TBD | 🔲 |
| Python | TBD | 🔲 |
| uv | TBD | 🔲 |
| git | TBD | 🔲 |
| VSCode | TBD | 🔲 |
