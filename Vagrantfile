# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|

  # Use Ubuntu 16.04 Xenial as a base box.
  config.vm.box = "ubuntu/xenial64"

  # Install dependencies needed for yubikey-manager development.
  config.vm.provision "shell", path: "provision.sh"

  # Sync repository
  config.vm.synced_folder '.', '/vagrant'

  config.vm.provider "virtualbox" do |vb|
    vb.name = "haoe (xenial 16.04)"
   end

end
