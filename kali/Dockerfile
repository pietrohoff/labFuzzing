FROM kalilinux/kali-rolling:latest

ENV DEBIAN_FRONTEND=noninteractive

# Pacotes + ferramentas
RUN apt-get update && apt-get install -y --no-install-recommends \
    ca-certificates \
    curl \
    wget \
    git \
    jq \
    unzip \
    tar \
    dnsutils \
    netcat-traditional \
    iputils-ping \
    ffuf \
    seclists \
  && apt-get clean \
  && rm -rf /var/lib/apt/lists/*

RUN mkdir -p /work /output

COPY entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

WORKDIR /work
ENTRYPOINT ["/entrypoint.sh"]
CMD ["bash"]