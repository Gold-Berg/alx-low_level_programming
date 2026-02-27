#  **DevSearch**
### Semantic Document Search Engine  
> **CPE 461 Course Project**

![Status](https://img.shields.io/badge/status-ongoing-%23c259)
![Course](https://img.shields.io/badge/course-CPE%20461-blue)
![Backend](https://img.shields.io/badge/backend-FastAPI-009688)
![Search](https://img.shields.io/badge/search-semantic-purple)
![AI](https://img.shields.io/badge/AI-embeddings-orange)

---

##  Project Overview

**DevSearch** is an intelligent web application that allows users to **upload documents** and **search them by meaning**, not just keywords.

Unlike traditional keyword-based search systems (Ctrl + F), DevSearch uses **vector embeddings** and **similarity search** to return results that are *conceptually related* to a query—even when the exact words don’t appear.

>  *Search ideas, not just text.*

---

##  Why DevSearch?

| Traditional Search | DevSearch (Semantic) |
|--------------------|----------------------|
| Exact word match | Meaning-based match |
| Misses synonyms | Understands context |
| Low relevance | High relevance |
| Static | Intelligent |

**Example:**  
Searching for **“network failure”** may return results containing  
**“connection loss”**, **“packet drop”**, or **“system outage”**.

---

##  Features at a Glance

-  Upload text & PDF documents  
-  Automatic document chunking  
-  AI-powered text embeddings  
-  Semantic document search  
-  Keyword-based filtering  
-  Document similarity comparison  
-  Loading indicators & error handling  
-  Clean demo-friendly UI flow  

---

##  Core User Flow

```text
Upload → Index → Search → Compare
```
---
## System Architecture
Frontend (React / JS)
        ↓
API Layer (FastAPI)
        ↓
Service Layer
        ↓
FAISS Vector Index
        ↓
SQL Database (Metadata)
        ↓
Embedding Models (Hugging Face)

## Architecture Breakdown

| Layer              | Component              | Responsibility                              |
|--------------------|------------------------|---------------------------------------------|
| **Frontend**       | React / JavaScript     | User interaction & beautiful UI             |
| **API Layer**      | FastAPI                | Handles HTTP requests, input validation     |
| **Service Layer**  | Python services        | Business logic, orchestration, retrieval    |
| **Index Layer**    | FAISS Vector Index     | Fast similarity search over embeddings      |
| **Database**       | SQL (e.g. PostgreSQL)  | Stores document metadata, IDs, attributes   |
| **Embedding Engine**| Hugging Face models    | Converts text → dense vectors               |

---
## Technology Stack
---
### Backend
Powerful, fast, and production-ready foundation

-  **FastAPI**  
  High-performance API framework with automatic OpenAPI docs & async support

-  **FAISS**  
  Extremely efficient similarity search & clustering of dense vectors

-  **SQLAlchemy**  
  SQL toolkit & ORM — handles metadata storage & complex queries

-  **Hugging Face Embeddings**  
  State-of-the-art text → vector models (Sentence Transformers, etc.)

### Frontend
Clean, responsive user experience

-  **React** / **Vanilla JavaScript**  
  Component-based UI (React) with optional lightweight vanilla JS fallbacks

-  **CSS** / **Tailwind CSS**  
  Modern styling — utility-first approach with Tailwind for rapid development

-  **Fetch** / **Axios**  
  HTTP client layer — native Fetch API + Axios for more advanced requests

API Documentation
<details> <summary> <b>POST /upload</b> — Upload Document</summary>
	
	Accepts text or PDF
 	Stores document metadata
 	Prepares document for indexing
</details>


 ````
{
  "file": "document.pdf"
}
````
 

 <details> <summary><b>POST /index</b> — Build Vector Index</summary>
 
	 
	 Splits documents into chunks
	 Converts chunks into embeddings
	 Stores vectors in FAISS 
</details>

````
{
  "status": "index built successfully"
}
````

<details> <summary> <b>GET /search</b> — Semantic Search</summary>
	
	 Meaning-based similarity search
    Optional keyword filtering
</details>

````
[
  {
    "content": "Relevant document chunk...",
    "score": 0.89
  }
]
````

<details> <summary> <b>POST /compare</b> — Compare Documents</summary>

	Measures conceptual similarity between documents
</details>

```
{
  "doc1": "docA",
  "doc2": "docB"
}

{
  "similarity_score": 0.73
}
```
---
##  Algorithmic Design
---
###  Document Chunking
- Fixed-size text chunks  
- Overlapping context for accuracy  

###  Embedding Generation
- Transformer-based models  
- Each chunk → high-dimensional vector  

###  Similarity Search
- FAISS nearest-neighbor search  
- Cosine similarity metric  

###  Hybrid Search
- Semantic similarity + keyword filtering  

### Time Complexity (High-Level)
| Operation | Complexity |
| --------- | ---------- |
| Indexing  | O(n × d)   |
| Search    | O(log n)   |
---

## Software Engineering Principles
---
-  Modularity

-  Separation of Concerns

-  Maintainability

- Reusability

- Extensibility

DevSearch is structured to allow easy future expansion without major redesign.

## Development Model
Iterative & Incremental Model
| Phase | Description             |
| ----- | ----------------------- |
| 1     | Requirement Analysis    |
| 2     | Backend API Development |
| 3     | Embedding & Indexing    |
| 4     | Frontend Integration    |
| 5     | Testing & Demo          |



##  Current Limitations

<details>
<summary>No user authentication</summary>

The system does not currently support login, role-based access, or identity verification.

</details>

<details>
<summary> No data encryption</summary>

Data is not encrypted at rest or in transit, which may pose security risks.

</details>

<details>
<summary> Limited document formats</summary>

Only a small set of file types are supported for upload and processing.

</details>

<details>
<summary> Single-user focus</summary>

The application is designed for individual use and does not support multi-user collaboration.

</details>
---

##  Future Enhancements

> Planned features to make **DevSearch** more powerful, scalable, and production-ready.

<details>
<summary> <strong>Authentication & Authorization</strong></summary>

- Secure user sign-up and login (JWT / OAuth support)
- Role-based access control (Admin, User, Viewer)
- Private document collections per user
- Token-based API security

</details>

<details>
<summary> <strong>Cloud Deployment</strong></summary>

- Deploy on cloud platforms (AWS / GCP / Azure)
- Docker & Kubernetes support
- Scalable vector database hosting
- CI/CD pipelines for automated deployments

</details>

<details>
<summary> <strong>Support for More File Formats</strong></summary>

- PDF, DOCX, PPTX
- Markdown (`.md`)
- CSV & Excel files
- Source code files (`.py`, `.js`, `.java`, etc.)

</details>

<details>
<summary><strong>Advanced Ranking Algorithms</strong></summary>

- Hybrid semantic + keyword ranking
- Context-aware result boosting
- User interaction-based relevance tuning
- Custom scoring functions

</details>

<details>
<summary> <strong>Search Evaluation Metrics</strong></summary>

- Precision & Recall
- Mean Reciprocal Rank (MRR)
- Normalized Discounted Cumulative Gain (nDCG)
- Benchmark datasets for performance testing

</details>

<details>
<summary> <strong>Multi-User Support</strong></summary>

- Collaborative document workspaces
- Shared and private indexes
- User activity tracking
- Organization-level access management

</details>

---
