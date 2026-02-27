#!/usr/bin/env bash
set -euo pipefail

echo "[+] Container de fuzzing pronto."
echo "[+] TARGET_BASE: ${TARGET_BASE:-http://juice:3000}"
echo "[+] WORDLIST_COMMON: ${WORDLIST_COMMON:-/usr/share/seclists/Discovery/Web-Content/common.txt}"
echo

command -v ffuf >/dev/null 2>&1 || { echo "[-] ffuf não encontrado"; exit 1; }
test -f "${WORDLIST_COMMON:-/usr/share/seclists/Discovery/Web-Content/common.txt}" || {
  echo "[-] Wordlist não encontrada em: ${WORDLIST_COMMON:-/usr/share/seclists/Discovery/Web-Content/common.txt}"
  echo "    Confira instalação do seclists."
  exit 1
}

exec "$@"