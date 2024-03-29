# SustainML

**Application Aware, Life-Cycle Oriented Model-Hardware Co-Design Framework for Sustainable, Energy Efficient ML Systems** project.


[![SustainML](sustainml_docs/rst/figures/SustainML_GitHub.png)](https://sustainml.eu/)

<br>

<div class="menu" align="center">
    <strong>
        <a href="https://eprosima.com/index.php/downloads-all">Download</a>
        <span>&nbsp;&nbsp;•&nbsp;&nbsp;</span>
        <a href="https://sustainml.readthedocs.io/en/latest">Docs</a>
        <span>&nbsp;&nbsp;•&nbsp;&nbsp;</span>
        <a href="https://sustainml.eu/index.php/news">News</a>
        <span>&nbsp;&nbsp;•&nbsp;&nbsp;</span>
        <a href="https://twitter.com/EProsima">Twitter</a>
        <span>&nbsp;&nbsp;•&nbsp;&nbsp;</span>
        <a href="mailto:info@eprosima.com">Contact Us</a>
    </strong>
</div>

<br><br>

<div class="badges" align="center">
    <a href="https://opensource.org/licenses/Apache-2.0"><img alt="License Robotics" src="https://img.shields.io/github/license/eProsima/SustainML.svg"/></a>
    <a href="https://github.com/eProsima/SustainML/releases"><img alt="Releases" src="https://img.shields.io/github/v/release/eProsima/SustainML?sort=semver"/></a>
    <a href="https://github.com/eProsima/SustainML/issues"><img alt="Issues" src="https://img.shields.io/github/issues/eProsima/SustainML.svg"/></a>
    <a href="https://github.com/eProsima/SustainML/network/memberss"><img alt="Forks" src="https://img.shields.io/github/forks/eProsima/SustainML.svg"/></a>
    <a href="https://github.com/eProsima/SustainML/stargazerss"><img alt="Stars" src="https://img.shields.io/github/stars/eProsima/SustainML.svg"/></a>
    <a href="https://SustainML.readthedocs.io/en/latest/"><img alt="Documentation Status" src="https://readthedocs.org/projects/SustainML/badge/?version=latest"/></a>
</div>

<br><br>

*SustainML* is a framework and an associated toolkit that will foster energy efficiency throughout the whole life-cycle of ML applications: from the design and exploration phase that includes exploratory iterations of training, testing and optimizing different system versions through the final training of the production systems (which often involves huge amounts of data, computation and epochs) and (where appropriate) continuous online re-training during deployment for the inference process.
The framework will optimize the ML solutions based on the application tasks, across levels from hardware to model architecture.
It will also collect both previously scattered efficiency-oriented research, as well as novel Green-AI methods.

AI developers from all experience levels can make use of the framework through its emphasis on human-centric interactive transparent design and functional knowledge cores, instead of the common blackbox and fully automated optimization approaches in AutoML.

---

## Project status

**This project is a work in progress and the following features presented here will be extended, updated, and improved in future versions.**

### Framework Architecture

The *SustainML Design Framework* is composed of different Software Modules, each one related to specific task, which are specialized in solving the different parts of the machine learning problem architecture definition, starting from the user’s problem description.
Each of the modules conforms a Node.
These steps are basically:

1. Task encoding
2. Generate the Machine Learning model
3. Select an Optimized Hardware for running the proposed model
4. Predict the Carbon footprint

All the Nodes shall import its corresponding Python library, so that each Node can be abstracted from the DDS communications.

### Backend

The Backend is an additional module in charge of collecting all the required data for the Frontend.
The Backend exchanges information over DDS with each of the different Nodes.

### Frontend

The Frontend is a *Graphical User Interface* (GUI) in which user interacts and introduces the ML problem definition.
The ML solutions provided by the set of Nodes are displayed to the user through this GUI.
This process can be iterative.
So, based on a previous solution and the user's feedback, the framework provides new ML solutions.

---

## Repository Architecture

This repository is divided in sub-packages with different targets:

* `sustainml_cpp` Main definition and implementation of the project logic library. C++ API provided.
* `sustainml_modules` Set of test with mocked modules.
* `sustainml_py` Python API.
* `sustainml_swig` Binding from `sustainml_cpp` to a Python API.

### Dependencies

*SustainML* depends on several standard or eProsima projects:

* Third-party libraries
  * Dependencies to download, compile and install project:
    * `wget`
    * `git`
  * Dependencies to install project:
    * `CMake`
    * `gcc`
    * `python3`
    * `pip`
    * `colcon` [optional]
  * Library dependencies:
    * `Asio`
    * `TinyXML2`
    * `OpenSSL` [ony with security]
    * `GTest` [ony for test]
* eProsima libraries
  * `fastcdr` Fast CDR for message serialization and deserialization.
  * `fastrtps` Fast DDS library for DDS communication.
  * `cmake_utils` CMake utilities library.
  * `cpp_utils` C++ utilities library.

## Getting Help

If you need support you can reach us by mail at [sustainml@eprosima.com](mailto:sustainml@eprosima.com) or by phone at `+34 91 804 34 48`.

---

<a href="https://sustainml.eu"><img src=".figures/eu_funded.png" align="left" hspace="8" vspace="2" height="60" ></a>
This project has received funding from the European Union’s Horizon Europe research and innovation programme (HORIZON-CL4-2021-HUMAN-01) under grant agreement No 101070408.
